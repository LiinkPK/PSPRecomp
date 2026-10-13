/* Entry 0x088F0564 | file offset 0x000ED53C | FUN_088f0564 | bytes 412 */

int FUN_088f0564(short param_1)

{
  int iVar1;
  int iVar2;
  int iVar3;
  undefined4 local_20;
  
  iVar1 = DAT_089d712c;
  iVar3 = (int)param_1;
  if ((((uint)*(byte *)(DAT_089d712c + 0x1dee6) + (uint)*(byte *)(DAT_089d712c + 0x1dee4) == 0) &&
      (iVar2 = FUN_088c4e9c(1,0,0,0,0), iVar2 != -1)) && (iVar3 != iVar2)) {
    DAT_089d7f18 = 0;
    *(undefined1 *)(iVar1 + 0x1dee9) = 1;
  }
  else {
    iVar2 = FUN_088c4e9c(2,(int)DAT_089d7f16,(int)DAT_089d7f14,0,0);
    if ((iVar2 == -1) || (iVar3 == iVar2)) {
      iVar2 = FUN_088c4e9c(3,0,(int)DAT_089d7f18,0,1);
      if ((iVar2 == -1) || (iVar3 == iVar2)) {
        local_20 = 0;
        if (*(char *)(iVar1 + 0x1dee9) == '\0') {
          *(byte *)(iVar1 + 0x1dee9) = *(byte *)(iVar1 + 0x1dee6);
        }
        iVar2 = FUN_088c4e9c(1,*(undefined1 *)(iVar1 + 0x1dee9),
                             (uint)*(byte *)(iVar1 + 0x1dee6) + (uint)*(byte *)(iVar1 + 0x1dee4),
                             &local_20,0);
        if ((iVar2 == -1) || (iVar3 == iVar2)) {
          DAT_089d7f18 = 0;
          iVar2 = -1;
        }
        else {
          DAT_089d7f18 = 0;
          *(char *)(iVar1 + 0x1dee9) = (char)local_20 + '\x01';
        }
      }
      else {
        DAT_089d7f18 = 0;
      }
    }
    else {
      DAT_089d7f18 = 0;
      DAT_089d7f16 = DAT_089d7f14 + 1;
    }
  }
  return iVar2;
}

