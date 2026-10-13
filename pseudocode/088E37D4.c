/* Entry 0x088E37D4 | file offset 0x000E07AC | FUN_088e37d4 | bytes 260 */

void FUN_088e37d4(int param_1)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  
  iVar3 = 0;
  piVar4 = (int *)(param_1 + 0x6a8);
  do {
    if (*(char *)((int)piVar4 + 0x42) != '\0') {
      iVar5 = 0;
      piVar2 = piVar4;
      do {
        if (*piVar2 != 0) {
          iVar1 = *(int *)(*piVar2 + 4);
          if ((iVar1 != 0) && (iVar1 != 0)) {
            FUN_088da060();
            *(undefined4 *)(*piVar2 + 4) = 0;
          }
          if ((piVar2[8] != 0) && (piVar2[8] != 0)) {
            FUN_0887ba5c();
            piVar2[8] = 0;
          }
        }
        iVar5 = iVar5 + 1;
        piVar2 = piVar2 + 1;
      } while (iVar5 < 8);
    }
    iVar5 = 0;
    piVar2 = piVar4;
    do {
      *piVar2 = 0;
      piVar2[8] = 0;
      iVar5 = iVar5 + 1;
      piVar2 = piVar2 + 1;
    } while (iVar5 < 8);
    *(undefined1 *)(piVar4 + 0x10) = 0;
    *(undefined1 *)((int)piVar4 + 0x41) = 0;
    *(undefined1 *)((int)piVar4 + 0x43) = 0;
    iVar3 = iVar3 + 1;
    *(undefined1 *)((int)piVar4 + 0x42) = 0;
    piVar4 = piVar4 + 0x11;
  } while (iVar3 < 4);
  return;
}

