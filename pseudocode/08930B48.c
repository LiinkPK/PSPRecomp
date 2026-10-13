/* Entry 0x08930B48 | file offset 0x0012DB20 | FUN_08930b48 | bytes 156 */

void FUN_08930b48(int param_1)

{
  undefined4 uVar1;
  undefined1 in_t0;
  undefined4 in_t1;
  undefined4 in_t2;
  int iVar2;
  int iVar3;
  
  FUN_0892ac5c();
  uVar1 = FUN_088d0700(DAT_089d7830,in_t0,in_t1,in_t2);
  *(undefined4 *)(param_1 + 0x30) = uVar1;
  FUN_088cf970(DAT_089d7830,uVar1);
  iVar3 = 0;
  iVar2 = param_1 + 0x38;
  do {
    FUN_08930320(iVar2);
    iVar3 = iVar3 + 1;
    iVar2 = iVar2 + 0x5c;
  } while (iVar3 < 6);
  *(undefined4 *)(param_1 + 0x260) = 0;
  return;
}

