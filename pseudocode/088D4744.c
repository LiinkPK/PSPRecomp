/* Entry 0x088D4744 | file offset 0x000D171C | FUN_088d4744 | bytes 68 */

void FUN_088d4744(int param_1)

{
  undefined4 uVar1;
  
  uVar1 = FUN_088d35e0(param_1,*(undefined4 *)(param_1 + 8),1);
  *(undefined4 *)(param_1 + 0x20) = uVar1;
  uVar1 = FUN_088d35e0(param_1,*(undefined4 *)(param_1 + 0xc),0xffffffff);
  *(undefined4 *)(param_1 + 0x24) = uVar1;
  return;
}

