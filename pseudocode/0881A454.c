/* Entry 0x0881A454 | file offset 0x0001742C | FUN_0881a454 | bytes 320 */

void FUN_0881a454(int param_1,int param_2,undefined1 param_3,undefined1 param_4)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  int iVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  
  iVar4 = *(int *)(param_1 + 0xc);
  iVar7 = 0;
  if (0 < iVar4) {
    iVar2 = *(int *)(param_1 + 0x10);
    iVar8 = 0;
    do {
      piVar3 = (int *)(iVar2 + iVar8);
      iVar5 = 0;
      bVar1 = false;
      if (0 < *piVar3) {
        piVar6 = (int *)piVar3[1];
        do {
          if (*piVar6 == param_2) {
            bVar1 = true;
            break;
          }
          iVar5 = iVar5 + 1;
          piVar6 = piVar6 + 1;
        } while (iVar5 < *piVar3);
      }
      if (bVar1) {
        *(undefined1 *)(piVar3 + 2) = param_3;
        iVar2 = *(int *)(param_1 + 0x10);
        iVar4 = 0;
        piVar3 = (int *)(iVar2 + iVar8);
        iVar5 = 0;
        if (0 < *piVar3) {
          do {
            FUN_0881a798(param_1,*(undefined4 *)(piVar3[1] + iVar5),param_3,param_4,1);
            iVar2 = *(int *)(param_1 + 0x10);
            iVar4 = iVar4 + 1;
            piVar3 = (int *)(iVar2 + iVar8);
            iVar5 = iVar5 + 4;
          } while (iVar4 < *piVar3);
        }
        iVar4 = *(int *)(param_1 + 0xc);
      }
      iVar7 = iVar7 + 1;
      iVar8 = iVar8 + 0xc;
    } while (iVar7 < iVar4);
  }
  return;
}

