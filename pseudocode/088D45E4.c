/* Entry 0x088D45E4 | file offset 0x000D15BC | FUN_088d45e4 | bytes 128 */

void FUN_088d45e4(undefined4 param_1,int param_2,ushort *param_3)

{
  ushort uVar1;
  
  uVar1 = param_3[2];
  while (uVar1 != 0xffff) {
    if (*(int *)(param_2 + (uint)*param_3 * 4) != 0) {
      FUN_0887b924();
    }
    uVar1 = param_3[6];
    param_3 = param_3 + 4;
  }
  return;
}

