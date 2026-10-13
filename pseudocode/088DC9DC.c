/* Entry 0x088DC9DC | file offset 0x000D99B4 | FUN_088dc9dc | bytes 372 */

int FUN_088dc9dc(int param_1,undefined2 *param_2,undefined2 *param_3)

{
  int iVar1;
  int iVar2;
  undefined2 *puVar3;
  undefined2 *puVar4;
  int iVar5;
  
  iVar1 = *(int *)(param_1 + 0x20);
  iVar2 = iVar1 * 4;
  puVar4 = (undefined2 *)0x0;
  puVar3 = (undefined2 *)0x0;
  if (param_3 != (undefined2 *)0x0) {
    puVar4 = param_3 + iVar1 * 2;
    puVar3 = param_3;
  }
  iVar5 = 0;
  if (0 < iVar1) {
    do {
      if (param_3 != (undefined2 *)0x0) {
        puVar3[1] = (short)iVar2;
        *puVar4 = *param_2;
        puVar4[1] = param_2[1];
        puVar4[2] = param_2[2];
        puVar4[3] = param_2[3];
        FUN_08935524(puVar4 + 4,param_2 + 8,0x10);
      }
      if ((*(float *)(param_2 + 4) == 0.0) && (*(float *)(param_2 + 6) == 0.0)) {
        if (param_3 != (undefined2 *)0x0) {
          *puVar3 = 0;
        }
        iVar1 = *(int *)(param_1 + 0x20);
        puVar4 = puVar4 + 0xc;
        iVar2 = iVar2 + 0x18;
      }
      else {
        if (param_3 != (undefined2 *)0x0) {
          *puVar3 = 1;
          FUN_08935524(puVar4 + 0xc,param_2 + 8,8);
          FUN_08935524(puVar4,param_2,0x20);
        }
        iVar1 = *(int *)(param_1 + 0x20);
        puVar4 = puVar4 + 0x10;
        iVar2 = iVar2 + 0x20;
      }
      iVar5 = iVar5 + 1;
      param_2 = param_2 + 0x10;
      puVar3 = puVar3 + 2;
    } while (iVar5 < iVar1);
  }
  return iVar2;
}

