#ifndef CAN_MESSAGE_H
#define CAN_MESSAGE_H

/**
 * @brief The CAN Message with priority, sleep time and a text.
 * 
 */
struct message {
    unsigned int priority;
    unsigned int sleep_in_ms;
    char[10] text;
};

#endif /* CAN_MESSAGE_H */