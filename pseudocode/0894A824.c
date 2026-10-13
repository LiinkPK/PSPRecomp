/* Entry 0x0894A824 | file offset 0x001477FC | FUN_0894a824 | bytes 280 */

void FUN_0894a824(int param_1)

{
  int iVar1;
  
  DAT_09b6f478 = param_1;
  *(undefined1 *)(param_1 + 0x94) = 6;
  if (*(int *)(param_1 + 0x70) != 0) {
    iVar1 = *(int *)(param_1 + 0x68);
    if (iVar1 != 0) {
      *(int *)(param_1 + 0x88) = iVar1;
      while( true ) {
        if ((((uint)*(ushort *)(param_1 + 0x24) & 1 << (**(uint **)(iVar1 + 0x1d0) >> 0x1c)) == 0)
           && ((*(ushort *)(iVar1 + 10) & 0xff7f) == 0)) {
          FUN_0894622c(param_1,iVar1);
          *(ushort *)(iVar1 + 10) = *(ushort *)(iVar1 + 10) & 0xff7f;
          *(ushort *)(iVar1 + 0xe) = *(ushort *)(iVar1 + 0xe) & 0xff7f;
          *(float *)(iVar1 + 0x4c) = *(float *)(iVar1 + 0xcc) * *(float *)(iVar1 + 0x16c);
          FUN_0894a674(param_1,iVar1);
          iVar1 = *(int *)(iVar1 + 0x154);
        }
        else {
          iVar1 = *(int *)(iVar1 + 0x154);
        }
        if (iVar1 == 0) break;
        *(int *)(param_1 + 0x88) = iVar1;
      }
    }
    *(undefined1 *)(param_1 + 0x94) = 9;
  }
  return;
}

