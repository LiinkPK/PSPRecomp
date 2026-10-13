/* Entry 0x088193A4 | file offset 0x0001637C | FUN_088193a4 | bytes 220 */

void FUN_088193a4(float param_1,int param_2)

{
  undefined4 uVar1;
  int iVar2;
  
  if ((*(char *)(param_2 + 0x24) != '\x01') &&
     ((*(float *)(param_2 + 0x28) <= 0.0 ||
      (param_1 = *(float *)(param_2 + 0x28) - param_1, *(float *)(param_2 + 0x28) = param_1,
      param_1 <= 0.0)))) {
    iVar2 = *(int *)(param_2 + 0x14);
    if ((iVar2 != 0) && (*(short *)(iVar2 + 0x180) == 0x3e9)) {
      FUN_0882fa10(0,iVar2 + 0x130,0x3ea,0);
    }
    uVar1 = FUN_0881baa8();
    FUN_0881c2cc(uVar1,*(undefined4 *)(param_2 + 0x48),0);
    FUN_0881c518(uVar1,*(undefined4 *)(param_2 + 0x48));
    *(undefined1 *)(param_2 + 0x24) = 1;
  }
  return;
}

