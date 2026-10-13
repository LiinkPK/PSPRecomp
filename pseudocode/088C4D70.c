/* Entry 0x088C4D70 | file offset 0x000C1D48 | FUN_088c4d70 | bytes 300 */

void FUN_088c4d70(int param_1,undefined2 *param_2)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  undefined2 *puVar4;
  int iVar5;
  uint uVar6;
  
  if (DAT_089d76c4 != 0) {
    FUN_08935828(param_2,0,param_1 * 2);
    iVar5 = 0;
    iVar2 = 0;
    if (0 < DAT_089d76cc) {
      iVar3 = 0;
      puVar4 = param_2;
      do {
        if (*(char *)(DAT_089d76c4 + iVar3 + 0x1d) != '\0') {
          if (param_1 <= iVar2) break;
          iVar2 = iVar2 + 1;
          *puVar4 = *(undefined2 *)(DAT_089d76c4 + iVar3);
          puVar4 = puVar4 + 1;
        }
        iVar5 = iVar5 + 1;
        iVar3 = iVar3 + 0x20;
      } while (iVar5 < DAT_089d76cc);
    }
    iVar5 = 1;
    puVar4 = param_2;
    if (1 < iVar2) {
      do {
        puVar4 = puVar4 + 1;
        iVar5 = iVar5 + 1;
        DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
        uVar6 = DAT_09afb89c >> 0x10;
        uVar1 = *puVar4;
        *puVar4 = param_2[(int)(uVar6 & 0x7fff) % iVar5];
        param_2[(int)(uVar6 & 0x7fff) % iVar5] = uVar1;
      } while (iVar5 < iVar2);
    }
  }
  return;
}

