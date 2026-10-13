/* Entry 0x088A65E4 | file offset 0x000A35BC | FUN_088a65e4 | bytes 88 */

int FUN_088a65e4(int *param_1)

{
  int iVar1;
  
  iVar1 = param_1[2];
  if (*param_1 != -1) {
    FUN_089418f8(param_1[1],*param_1);
    *param_1 = -1;
    param_1[2] = 0;
  }
  return iVar1;
}

