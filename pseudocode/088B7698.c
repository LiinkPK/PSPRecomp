/* Entry 0x088B7698 | file offset 0x000B4670 | FUN_088b7698 | bytes 248 */

undefined4 FUN_088b7698(int param_1,uint param_2,undefined4 param_3)

{
  undefined2 *puVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  puVar1 = (undefined2 *)FUN_088b1d9c(param_3);
  if (((puVar1 != (undefined2 *)0x0) && (((uint)(ushort)puVar1[0xf] & 1 << (param_2 & 0x1f)) != 0))
     && (puVar1[3] != -1)) {
    iVar3 = param_1 + param_2 * 0x1e;
    iVar2 = 0;
    iVar5 = iVar3;
    do {
      if (CONCAT11(*(undefined1 *)(param_1 + 0xb6),*(undefined1 *)(iVar3 + iVar2)) == puVar1[3]) {
        iVar4 = 0;
        do {
          if (*(char *)(iVar5 + iVar4 + 0xc) == -1) {
            *(char *)(iVar5 + iVar4 + 0xc) = (char)*puVar1;
            return 1;
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < 3);
      }
      iVar2 = iVar2 + 1;
      iVar5 = iVar5 + 3;
    } while (iVar2 < 6);
  }
  return 0;
}

