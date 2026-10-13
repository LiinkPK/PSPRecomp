/* Entry 0x088AF2AC | file offset 0x000AC284 | FUN_088af2ac | bytes 156 */

void FUN_088af2ac(int param_1)

{
  int iVar1;
  undefined1 auStack_10 [8];
  
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0x814) = 4;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xdd4) = 0;
  *(undefined4 *)(*(int *)(param_1 + 0xc) + 0xdac) = 3;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0x2b80) = 0;
  *(undefined1 *)(*(int *)(param_1 + 0xc) + 0xd65) = 0;
  *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) & 0xfffffffe;
  iVar1 = FUN_089a5490(auStack_10,*(int *)(param_1 + 0xc) + 0x2b58);
  if (iVar1 < 0) {
    iVar1 = *(int *)(param_1 + 0xc);
    *(undefined4 *)(iVar1 + 0x2b5c) = 0;
    *(undefined4 *)(iVar1 + 0x2b58) = 0;
  }
  FUN_088af134(param_1,0);
  return;
}

