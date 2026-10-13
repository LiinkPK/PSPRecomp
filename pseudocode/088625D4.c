/* Entry 0x088625D4 | file offset 0x0005F5AC | FUN_088625d4 | bytes 124 */

undefined4 FUN_088625d4(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  uVar2 = 0;
  iVar1 = FUN_08861c64(*(undefined4 *)(param_1 + *(int *)(param_1 + 0x68) * 4 + 0x54));
  if (iVar1 == 1) {
    iVar1 = *(int *)(param_1 + 0x68) + 1;
    *(int *)(param_1 + 0x68) = iVar1;
    if (iVar1 == *(int *)(param_1 + 100)) {
      uVar2 = 1;
    }
    else {
      FUN_08861c48(*(undefined4 *)(param_1 + iVar1 * 4 + 0x54));
    }
  }
  return uVar2;
}

