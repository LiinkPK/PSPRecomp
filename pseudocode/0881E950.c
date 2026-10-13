/* Entry 0x0881E950 | file offset 0x0001B928 | FUN_0881e950 | bytes 184 */

int * FUN_0881e950(char *param_1,int param_2)

{
  int *piVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  
  if (*param_1 != '\0') {
    uVar3 = 0;
    uVar2 = *(uint *)(param_1 + 0x4c);
    if ((param_2 != 0) && (iVar5 = 0, 0 < (int)uVar2)) {
      iVar4 = *(int *)(param_1 + 0x50);
      do {
        uVar3 = uVar3 + 1;
        if (iVar4 == param_2) break;
        iVar5 = iVar5 + 1;
        iVar4 = iVar4 + 0x68;
      } while (iVar5 < (int)uVar2);
    }
    if (uVar3 < uVar2) {
      piVar1 = (int *)(*(int *)(param_1 + 0x50) + uVar3 * 0x68);
      do {
        if (*piVar1 != -1) {
          return piVar1;
        }
        uVar3 = uVar3 + 1;
        piVar1 = piVar1 + 0x1a;
      } while (uVar3 < uVar2);
    }
  }
  return (int *)0x0;
}

