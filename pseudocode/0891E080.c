/* Entry 0x0891E080 | file offset 0x0011B058 | FUN_0891e080 | bytes 148 */

void FUN_0891e080(int param_1)

{
  undefined4 uVar1;
  
  if (*(int *)(param_1 + 0x13c) != 0) {
    FUN_0891e5e4();
    uVar1 = 0;
    if (*(int *)(param_1 + 0x13c) != 0) {
      FUN_0887b1f4(*(int *)(param_1 + 0x13c) + 8,2);
      uVar1 = *(undefined4 *)(param_1 + 0x13c);
    }
    FUN_0885c538(*(undefined4 *)(param_1 + 0x134),uVar1,0);
    *(undefined4 *)(param_1 + 0x13c) = 0;
  }
  FUN_0885c488(*(undefined4 *)(param_1 + 0x134));
  FUN_0888208c(*(undefined4 *)(param_1 + 0x138));
  *(undefined4 *)(param_1 + 0x134) = 0;
  *(undefined4 *)(param_1 + 0x138) = 0;
  if (*(code **)(param_1 + 0x140) != (code *)0x0) {
    (**(code **)(param_1 + 0x140))(*(undefined4 *)(param_1 + 0x144));
  }
  return;
}

