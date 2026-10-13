/* Entry 0x089250AC | file offset 0x00122084 | FUN_089250ac | bytes 124 */

void FUN_089250ac(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  if (*(char *)(*(int *)(param_1 + 4) + 0xd) == '\x02') {
    iVar1 = FUN_088444d4(DAT_089d4960,(int)*(short *)(*(int *)(param_1 + 4) + 0xe));
    if (iVar1 != 0) {
      FUN_08844520(DAT_089d4960,(int)*(short *)(*(int *)(param_1 + 4) + 0xe));
    }
  }
  uVar2 = func_0x08b42b40();
  FUN_0885c538(uVar2,*(undefined4 *)(param_1 + 4),0);
  *(undefined4 *)(param_1 + 4) = 0;
  return;
}

