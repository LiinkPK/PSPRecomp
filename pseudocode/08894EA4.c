/* Entry 0x08894EA4 | file offset 0x00091E7C | FUN_08894ea4 | bytes 148 */

void FUN_08894ea4(int param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  FUN_0886f074(param_1 + 0x60);
  FUN_089a3ebc(param_1 + 0x10);
  iVar3 = 0;
  iVar1 = *(int *)(param_1 + 0x74);
  iVar2 = param_1;
  do {
    *(undefined4 *)(iVar2 + 0x90) = 0;
    *(undefined4 *)(iVar2 + 0x98) = 0;
    *(undefined4 *)(iVar2 + 0x9c) = 0;
    *(undefined4 *)(iVar2 + 0xa0) = 0x3f800000;
    *(undefined4 *)(iVar2 + 0xa4) = 0x80808080;
    *(undefined4 *)(iVar2 + 0xa8) = 1;
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x1c;
  } while (iVar3 < 4);
  *(undefined4 *)(param_1 + 0x88) = 2;
  *(undefined4 *)(param_1 + 0x8c) = 0;
  if (iVar1 != 0) {
    FUN_0886eb84();
    *(undefined4 *)(param_1 + 0x74) = 0;
  }
  return;
}

