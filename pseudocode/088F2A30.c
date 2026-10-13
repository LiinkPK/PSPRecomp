/* Entry 0x088F2A30 | file offset 0x000EFA08 | FUN_088f2a30 | bytes 52 */

undefined4 FUN_088f2a30(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  iVar1 = FUN_088b70c8((int)**(char **)(param_1 + 4));
  uVar2 = 0;
  if (iVar1 != 0) {
    uVar2 = FUN_088c09fc(*(undefined1 *)(iVar1 + 1));
  }
  return uVar2;
}

