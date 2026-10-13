/* Entry 0x08914198 | file offset 0x00111170 | FUN_08914198 | bytes 136 */

void FUN_08914198(int param_1)

{
  int iVar1;
  
  FUN_08864d98(0,0x3f800000);
  func_0x08b49ca4(*(undefined4 *)(param_1 + 0x570));
  iVar1 = func_0x08b49e54(*(undefined4 *)(param_1 + 0x570));
  if ((iVar1 != 0) && (iVar1 = func_0x08b49ee4(*(undefined4 *)(param_1 + 0x570)), iVar1 != 0)) {
    FUN_08864db8();
    FUN_08914b64(param_1,2);
    *(undefined1 *)(param_1 + 0x7d7) = 1;
    *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
         *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) & 0xfffffffd;
  }
  return;
}

