/* Entry 0x088FCAE8 | file offset 0x000F9AC0 | FUN_088fcae8 | bytes 164 */

bool FUN_088fcae8(int param_1)

{
  bool bVar1;
  int iVar2;
  
  if (*(int *)(param_1 + 0x30) == 0) {
    bVar1 = true;
  }
  else {
    bVar1 = true;
    if (*(int *)(param_1 + 0x10) != 0) {
      FUN_0887e798(DAT_089d6998,*(int *)(param_1 + 0x10));
      iVar2 = FUN_0887e718(DAT_089d6998);
      bVar1 = iVar2 == 0;
      if (bVar1) {
        FUN_088fca30(param_1);
      }
      FUN_0887e7b4(DAT_089d6998);
      if (bVar1) {
        *(undefined4 *)(param_1 + 0x10) = 0;
      }
    }
  }
  return bVar1;
}

