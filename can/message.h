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

#endif /* CAN_MESSAGE_H */