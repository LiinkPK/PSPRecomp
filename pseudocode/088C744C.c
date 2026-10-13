/* Entry 0x088C744C | file offset 0x000C4424 | FUN_088c744c | bytes 216 */

undefined2 * FUN_088c744c(int param_1,int param_2,char param_3)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  undefined2 *puVar5;
  
  puVar5 = (undefined2 *)0x0;
  iVar1 = FUN_088c7600();
  if (iVar1 != -1) {
    puVar5 = (undefined2 *)(param_1 + *(int *)(param_1 + 0x1860) * 0x138);
    iVar2 = 0;
    iVar4 = 0x27;
    do {
      uVar3 = ((undefined4 *)(param_2 + iVar2))[1];
      *(undefined4 *)((int)puVar5 + iVar2) = *(undefined4 *)(param_2 + iVar2);
      ((undefined4 *)((int)puVar5 + iVar2))[1] = uVar3;
      iVar4 = iVar4 + -1;
      iVar2 = iVar2 + 8;
    } while (iVar4 != 0);
    *puVar5 = (short)iVar1;
    puVar5[2] = 1;
    if (param_3 == '\x01') {
      puVar5[2] = puVar5[2] | 2;
    }
    *(int *)(param_1 + 0x1860) = *(int *)(param_1 + 0x1860) + 1;
  }
  return puVar5;
}

