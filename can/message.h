#ifndef CAN_MESSAGE_H
#define CAN_MESSAGE_H

/**
 * @brief The CAN Message with priority, sleep time and a text.
 * 
 */
struct Message 
{
    unsigned int priority;
    unsigned int sleep_in_ms;
    char text[10];
};

typedef struct Message message_t;

union Serialized_Message {
    message_t message;
    char buffer[sizeof(struct Message)];
};

typedef union Serialized_Message serialized_message_t;

#endif /* CAN_MESSAGE_H */