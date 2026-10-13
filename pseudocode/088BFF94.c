/* Entry 0x088BFF94 | file offset 0x000BCF6C | FUN_088bff94 | bytes 44 */

void FUN_088bff94(undefined2 *param_1)

{
  int iVar1;
  
  *param_1 = 0xffff;
  param_1[1] = 0;
  iVar1 = 0;
  do {
    param_1[2] = 0;
    iVar1 = iVar1 + 1;
    param_1 = param_1 + 1;
  } while (iVar1 < 4);
  return;
}

