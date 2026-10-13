/* Entry 0x0891E5E4 | file offset 0x0011B5BC | FUN_0891e5e4 | bytes 192 */

void FUN_0891e5e4(int *param_1)

{
  int *piVar1;
  int iVar2;
  
  iVar2 = 0;
  piVar1 = param_1;
  do {
    if (piVar1[4] != 0) {
      FUN_0887ba5c();
      piVar1[4] = 0;
    }
    iVar2 = iVar2 + 1;
    piVar1 = piVar1 + 1;
  } while (iVar2 < 2);
  if (param_1[1] != 0) {
    FUN_088da060();
    param_1[1] = 0;
  }
  if (*param_1 != 0) {
    FUN_088dab44();
    *param_1 = 0;
  }
  FUN_088d0370(DAT_089d7830,0x23,1);
  if ((char)param_1[7] == '\x01') {
    FUN_0887b3b8(param_1 + 2);
    *(undefined1 *)(param_1 + 7) = 0;
  }
  return;
}

