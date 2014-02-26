#include <handystats/metrics/gauge.hpp>


namespace handystats { namespace metrics {

namespace default_parameters {
	double moving_average_alpha = 2.0 / (1 + 15);
}

void gauge::internal_stats::update_value(value_type value, time_point timestamp) {
	values(value, boost::accumulators::timestamp = timestamp);
}

gauge::gauge()
{
}

gauge::gauge(value_type value, time_point timestamp)
	: value(value)
	, timestamp(timestamp)
{
	stats.update_value(value, timestamp);
}


void gauge::set(value_type value, time_point timestamp) {
	this->value = value;
	this->timestamp = timestamp;

	stats.update_value(this->value, this->timestamp);
}

}} // namespace handystats::metrics
