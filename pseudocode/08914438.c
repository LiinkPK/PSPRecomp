/* Entry 0x08914438 | file offset 0x00111410 | FUN_08914438 | bytes 204 */

void FUN_08914438(int param_1)

{
  int iVar1;
  
  iVar1 = *(int *)(param_1 + 0x48);
  if (iVar1 < 4) {
    if ((2 < iVar1) && (30.0 <= *(float *)(param_1 + 0x6c))) {
      FUN_08834d60(0x41a00000,*(undefined4 *)(param_1 + 0x6d0));
      *(undefined4 *)(param_1 + 0x48) = 4;
    }
  }
  else if ((iVar1 < 5) && (50.0 <= *(float *)(param_1 + 0x6c))) {
    *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) =
         *(uint *)(*(int *)(param_1 + 0x6d0) + 0x380) & 0xfffffffd;
    FUN_08914b64(param_1,2);
  }
  return;
}

