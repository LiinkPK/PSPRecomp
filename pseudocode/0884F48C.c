/* Entry 0x0884F48C | file offset 0x0004C464 | FUN_0884f48c | bytes 216 */

void FUN_0884f48c(int param_1)

{
  undefined1 uVar1;
  undefined4 *puVar2;
  int iVar3;
  int iVar4;
  
  iVar4 = 0;
  iVar3 = param_1;
  do {
    if (*(short *)(iVar3 + 0x12) != 0) {
      FUN_0884f010(iVar3);
    }
    iVar4 = iVar4 + 1;
    iVar3 = iVar3 + 0x20;
  } while (iVar4 < 0x10);
  uVar1 = **(undefined1 **)(*(int *)(param_1 + 0x200) + 0x5a4);
  puVar2 = (undefined4 *)0x0;
  while (puVar2 = (undefined4 *)FUN_08850a90(puVar2,uVar1), puVar2 != (undefined4 *)0x0) {
    if ((*(ushort *)((int)puVar2 + 6) & 0x10) != 0) {
      FUN_08850574(param_1,*puVar2,0xffffffff,0,0,0,0,5,0);
    }
  }
  return;
}

