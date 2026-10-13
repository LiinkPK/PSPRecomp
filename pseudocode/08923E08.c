/* Entry 0x08923E08 | file offset 0x00120DE0 | FUN_08923e08 | bytes 120 */

undefined4 FUN_08923e08(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_089237ac();
  if ((iVar1 == 0) || (*(int *)(*(int *)(param_1 + 0x20) + 0xbc) == 0)) {
    uVar2 = 0;
  }
  else {
    func_0x08b347ac(0x41f00000,0x41f00000);
    FUN_0882fa10(0,0,*(int *)(*(int *)(param_1 + 0x20) + 0xbc) + 0x130,10000,0);
    uVar2 = 1;
  }
  return uVar2;
}

