/* Entry 0x0892E3CC | file offset 0x0012B3A4 | FUN_0892e3cc | bytes 188 */

void FUN_0892e3cc(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  
  FUN_0892de18();
  if ((*(uint *)(param_1 + 0xe0) & 1) != 0) {
    iVar1 = param_1 + *(int *)(param_1 + 0xdc) * 0x1c;
    if (*(float *)(iVar1 + 0x60) <= *(float *)(param_1 + 0xe4)) {
      uVar2 = *(undefined4 *)(iVar1 + 0x4c);
      *(uint *)(param_1 + 0xe0) = *(uint *)(param_1 + 0xe0) & 0xfffffffe;
      FUN_0892e488(param_1,uVar2,*(undefined4 *)(iVar1 + 0x50),*(undefined4 *)(iVar1 + 0x54),
                   *(undefined4 *)(iVar1 + 0x58),*(undefined4 *)(iVar1 + 0x5c),
                   *(undefined4 *)(iVar1 + 0x48));
      FUN_0892e5dc(param_1);
    }
    *(float *)(param_1 + 0xe4) = *(float *)(param_1 + 0xe4) + 1.0;
  }
  return;
}

