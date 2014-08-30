// Copyright (c) 2014 Yandex LLC. All rights reserved.

#ifndef HANDYSTATS_CONFIG_INCREMENTAL_STATISTICS_HPP_
#define HANDYSTATS_CONFIG_INCREMENTAL_STATISTICS_HPP_

#include <chrono>

namespace handystats { namespace config {

struct incremental_statistics {
	struct defaults {
		static const double moving_average_alpha;
		static const std::chrono::milliseconds moving_interval;
	};

	double moving_average_alpha;
	std::chrono::milliseconds moving_interval;

	incremental_statistics();
};

}} // namespace handystats::config

#endif // HANDYSTATS_CONFIG_INCREMENTAL_STATISTICS_HPP_
