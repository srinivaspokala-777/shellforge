#ifndef PARSER_H
#define PARSER_H

#define MAX_ARGS 64

typedef struct
{
    int argc;
    char *argv[MAX_ARGS];

} command_t;

/* Add your existing pipeline definition here */
typedef struct
{
    command_t commands[MAX_ARGS];
    int command_count;

} pipeline_t;

int parser(token_list_t *tokens, pipeline_t *pipeline);

#endif
