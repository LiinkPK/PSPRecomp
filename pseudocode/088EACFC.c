/* Entry 0x088EACFC | file offset 0x000E7CD4 | FUN_088eacfc | bytes 240 */

undefined4 FUN_088eacfc(int *param_1,ushort *param_2)

{
  ushort uVar1;
  int iVar2;
  uint uVar3;
  
  iVar2 = FUN_088eaf88();
  if ((iVar2 != 0) && ((char)param_1[0x1f] != '\0')) {
    FUN_088eaf9c(param_1);
    *(undefined1 *)(param_1 + 0x1f) = 0;
  }
  uVar1 = *param_2;
  if (uVar1 < 0x321) {
    if (799 < uVar1) {
      iVar2 = FUN_088eaf88(param_1);
      if (iVar2 == 0) {
        *(undefined1 *)(param_1 + 0x1f) = 1;
        return 0;
      }
      FUN_088eaf9c(param_1);
    }
  }
  else if (uVar1 < 0x322) {
    uVar3 = 0;
    do {
      if (*param_1 != 0) {
        FUN_0889f830(*param_1 + 4,0);
      }
      uVar3 = uVar3 + 1;
      param_1 = param_1 + 2;
    } while (uVar3 < 2);
  }
  return 1;
}

