/* Entry 0x089128DC | file offset 0x0010F8B4 | FUN_089128dc | bytes 160 */

void FUN_089128dc(int param_1,int param_2,undefined4 param_3,undefined4 param_4,undefined2 param_5,
                 char param_6)

{
  int iVar1;
  
  iVar1 = param_1 + param_2 * 0xc;
  FUN_089a34c0(iVar1 + 0x1d8,param_3);
  FUN_089a34c0(iVar1 + 0x208,param_4);
  *(undefined2 *)(param_1 + param_2 * 2 + 0x238) = param_5;
  if (param_6 != '\0') {
    *(byte *)(param_1 + param_2 + 0x1d4) = *(byte *)(param_1 + param_2 + 0x1d4) | 1;
  }
  return;
}

