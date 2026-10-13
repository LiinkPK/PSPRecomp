/* Entry 0x089A377C | file offset 0x001A0754 | FUN_089a377c | bytes 32 */

bool FUN_089a377c(uint *param_1)

{
  return ((*param_1 | param_1[1] | param_1[2]) & 0x7fffffff) == 0;
}

