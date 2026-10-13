/* Entry 0x0884AAA0 | file offset 0x00047A78 | FUN_0884aaa0 | bytes 628 */

void FUN_0884aaa0(float param_1,undefined4 param_2,undefined4 param_3,int param_4,int param_5,
                 char param_6)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  int iVar4;
  byte bVar5;
  float fVar6;
  
  iVar4 = *(int *)(DAT_089d4d80 + 0x2810) + (param_5 * 2 + param_4) * 0x48;
  if ((0 < param_5) && (param_5 < 0x20)) {
    iVar2 = FUN_0884c3f0();
    FUN_089a3868(iVar2 + 0x20,param_2);
    FUN_089a3868(iVar2,iVar2 + 0x20);
    if (param_6 == '\0') {
      fVar6 = *(float *)(iVar4 + -0x60);
    }
    else {
      fVar6 = -*(float *)(iVar4 + -0x5c);
      DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
      fVar6 = *(float *)(iVar4 + -0x60) +
              (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 *
              (*(float *)(iVar4 + -0x5c) - fVar6) + fVar6;
    }
    FUN_089a3a44(param_1 * fVar6,iVar2 + 0x10,param_3);
    fVar6 = -*(float *)(iVar4 + -0x7c);
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    *(float *)(iVar2 + 0x30) =
         *(float *)(iVar4 + -0x80) +
         (float)(DAT_09afb89c >> 0x10 & 0x7fff) * 3.051851e-05 * (*(float *)(iVar4 + -0x7c) - fVar6)
         + fVar6;
    bVar5 = *(byte *)(iVar4 + -0x87);
    fVar6 = (float)(int)-(uint)bVar5;
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    uVar3 = DAT_09afb89c >> 0x10;
    bVar1 = *(byte *)(iVar4 + -0x88);
    *(char *)(iVar2 + 0x38) = (char)param_5;
    *(char *)(iVar2 + 0x39) = (char)param_4;
    *(float *)(iVar2 + 0x34) =
         (float)bVar1 + (float)(uVar3 & 0x7fff) * 3.051851e-05 * ((float)bVar5 - fVar6) + fVar6;
    DAT_09afb89c = DAT_09afb89c * 0x343fd + 0x269ec3;
    uVar3 = DAT_09afb89c >> 0x10 & 0x7fff;
    if ((int)uVar3 < 0) {
      bVar5 = -(-(char)uVar3 & 3U);
    }
    else {
      bVar5 = (byte)((uint)DAT_09afb89c >> 0x10) & 3;
    }
    *(byte *)(iVar2 + 0x3a) = bVar5;
    *(int *)(iVar2 + 0x3c) = iVar4 + -0x90;
    FUN_0884c474(DAT_089d4d80,iVar2);
  }
  return;
}

