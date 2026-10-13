/* Entry 0x088E36C4 | file offset 0x000E069C | FUN_088e36c4 | bytes 272 */

void FUN_088e36c4(undefined4 *param_1)

{
  int iVar1;
  undefined2 *puVar2;
  int iVar3;
  int *piVar4;
  int iVar5;
  int *piVar6;
  
  iVar3 = 0;
  piVar4 = param_1 + 0x1aa;
  do {
    if (*(char *)((int)piVar4 + 0x42) != '\0') {
      if (*(char *)((int)piVar4 + 0x43) != '\0') {
        FUN_088e052c(*param_1,(int)*(char *)((int)piVar4 + 0x41));
      }
      iVar5 = 0;
      piVar6 = piVar4;
      do {
        if (*piVar6 != 0) {
          iVar1 = *(int *)(*piVar6 + 4);
          if ((iVar1 != 0) && (iVar1 != 0)) {
            FUN_088da060();
            *(undefined4 *)(*piVar6 + 4) = 0;
          }
          if ((piVar6[8] != 0) && (piVar6[8] != 0)) {
            FUN_0887ba5c();
            piVar6[8] = 0;
          }
          puVar2 = (undefined2 *)*piVar6;
          *puVar2 = 0xffff;
          puVar2[1] = 0xffff;
          *(undefined4 *)(puVar2 + 2) = 0;
          *piVar6 = 0;
        }
        iVar5 = iVar5 + 1;
        piVar6 = piVar6 + 1;
      } while (iVar5 < 8);
    }
    iVar3 = iVar3 + 1;
    piVar4 = piVar4 + 0x11;
  } while (iVar3 < 4);
  return;
}

