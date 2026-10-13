/* Entry 0x088748D4 | file offset 0x000718AC | FUN_088748d4 | bytes 204 */

void FUN_088748d4(void)

{
  undefined4 uVar1;
  int iVar2;
  float *pfVar3;
  
  pfVar3 = (float *)&DAT_09b48258;
  uVar1 = FUN_08882274(DAT_089d69a8);
  FUN_088823c4(uVar1,1,35000,FUN_08874dfc,"SCREEN_SHAKE::ExecTask");
  DAT_09b48250 = 0x32c;
  iVar2 = 0;
  do {
    iVar2 = iVar2 + 1;
    DAT_09b48250 = DAT_09b48250 * 0x343fd + 0x269ec3;
    *pfVar3 = (float)(DAT_09b48250 >> 0x10 & 0x7fff) * 3.051851e-05 * 2.0 + -1.0;
    pfVar3 = pfVar3 + 1;
  } while (iVar2 < 0x40);
  return;
}

