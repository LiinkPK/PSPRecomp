/* Entry 0x0883E6E8 | file offset 0x0003B6C0 | FUN_0883e6e8 | bytes 116 */

undefined4 * FUN_0883e6e8(undefined4 param_1,undefined4 param_2,undefined4 param_3)

{
  int iVar1;
  undefined4 *puVar2;
  
  iVar1 = FUN_08812014(param_2,param_3);
  if (iVar1 == 0) {
    puVar2 = (undefined4 *)0x0;
  }
  else {
    puVar2 = (undefined4 *)FUN_08842100(iVar1 * 0x1c + 0xc);
    *(undefined2 *)(puVar2 + 1) = 0;
    *puVar2 = param_1;
    *(char *)((int)puVar2 + 6) = (char)param_3;
    puVar2[2] = 0;
    *(undefined1 *)((int)puVar2 + 7) = 0;
  }
  return puVar2;
}

