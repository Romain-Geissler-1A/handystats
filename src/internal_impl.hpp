#ifndef HANDYSTATS_INTERNAL_IMPL_H_
#define HANDYSTATS_INTERNAL_IMPL_H_


namespace handystats { namespace events {

struct event_message;

}} // namespace handystats::events


namespace handystats { namespace internal {

void process_event_message(const events::event_message&);

void initialize();
void finalize();

}} // namespace handystats::internal


#endif // HANDYSTATS_INTERNAL_IMPL_H_
