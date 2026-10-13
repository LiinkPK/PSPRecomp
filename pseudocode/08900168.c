/* Entry 0x08900168 | file offset 0x000FD140 | FUN_08900168 | bytes 656 */

int FUN_08900168(void)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  
  if (DAT_089d8134 < 0) {
    iVar3 = 0;
  }
  else if (DAT_089d8138 == '\0') {
    iVar3 = 0;
    if (*(int *)(DAT_089d712c + 0xebc) == 1) {
      iVar1 = FUN_089a5f60();
      if (iVar1 == 0) {
        if (*(char *)(DAT_089d7280 + 3) == '\0') {
          iVar1 = FUN_088ffdcc();
          if (iVar1 == 0) {
            iVar3 = FUN_088ffddc();
            FUN_088ffb2c(0x200);
            DAT_089d5fd5 = 1;
          }
          if (-1 < iVar3) {
            *(int *)(DAT_089d8128 + 0x3e40) = *(int *)(DAT_089d8128 + 0x3e40) + 0x3714;
            iVar3 = 0x5bf;
            if (14999 < *(int *)(DAT_089d8128 + 0x3e40)) {
              *(int *)(DAT_089d8128 + 0x3e40) = *(int *)(DAT_089d8128 + 0x3e40) + -30000;
              iVar3 = 0x5c0;
            }
            FUN_088ffda0(iVar3);
            *(int *)(DAT_089d8128 + 0x3e48) = *(int *)(DAT_089d8128 + 0x3e48) + iVar3;
            *(int *)(DAT_089d8128 + 0x3e44) = *(int *)(DAT_089d8128 + 0x3e44) + 1;
            iVar1 = DAT_089d8128 + 0x83e80;
            iVar3 = FUN_089a62c8(iVar1,DAT_089d8128 + 0x84280,0x80000);
            if (-1 < iVar3) {
              uVar2 = FUN_08866ed8(DAT_089d5ec0);
              iVar3 = FUN_089a6068(iVar1,uVar2);
              if ((((-1 < iVar3) &&
                   (iVar3 = FUN_088ff1f0(DAT_089d8128 + 0x84280,iVar3,0,0,0x40000000,0), -1 < iVar3)
                   ) && (uVar4 = *(uint *)(DAT_089d8128 + 0x3e48) & 0xfffffe00, uVar4 != 0)) &&
                 (iVar1 = FUN_089004b4(DAT_089d8128 + 0x84280,uVar4,0x5622), 0 < iVar1)) {
                *(uint *)(DAT_089d8128 + 0x3e48) = *(int *)(DAT_089d8128 + 0x3e48) - uVar4;
                iVar3 = FUN_088ff1f0(0,0,DAT_089d8128 + 0x84280,iVar1,0x40000000,0);
              }
            }
          }
        }
        else {
          iVar3 = -1;
        }
      }
      else {
        iVar3 = -2;
      }
    }
    else {
      iVar3 = -0x7ffdfcdf;
    }
  }
  else {
    iVar3 = 0;
  }
  return iVar3;
}

