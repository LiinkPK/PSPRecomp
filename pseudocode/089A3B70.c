/* Entry 0x089A3B70 | file offset 0x001A0B48 | FUN_089a3b70 | bytes 40 */

bool FUN_089a3b70(uint *param_1)

{
  return ((*param_1 | param_1[1] | param_1[2] | param_1[3]) & 0x7fffffff) == 0;
}

