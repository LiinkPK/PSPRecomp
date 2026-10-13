/* Entry 0x088FB434 | file offset 0x000F840C | FUN_088fb434 | bytes 412 */

void FUN_088fb434(int param_1)

{
  undefined2 uVar1;
  int iVar2;
  undefined4 uVar3;
  int iVar4;
  int iVar5;
  
  iVar5 = 1 - param_1;
  if ((int)(short)(&DAT_09afc7da)[iVar5 * 0x830] == (int)(short)(&DAT_09afc7da)[param_1 * 0x830]) {
    iVar2 = FUN_088470b8((int)(short)(&DAT_09afc7da)[iVar5 * 0x830]);
    if (iVar2 != 0) {
      uVar3 = FUN_088fb9bc((int)*(char *)(iVar2 + 7));
      uVar1 = FUN_088fb934((int)*(char *)(iVar2 + 6),uVar3,0);
      (&DAT_09afc7da)[iVar5 * 0x830] = uVar1;
    }
  }
  else if (((-1 < (short)(&DAT_09afc7de)[param_1 * 0x830]) &&
           (iVar2 = FUN_088470b8((int)(short)(&DAT_09afc7de)[param_1 * 0x830]), iVar2 != 0)) &&
          (iVar4 = FUN_088fb934((int)*(char *)(iVar2 + 6),(int)*(char *)(iVar2 + 7),0),
          (short)(&DAT_09afc7da)[iVar5 * 0x830] == iVar4)) {
    uVar3 = FUN_088fb9bc((int)*(char *)(iVar2 + 7));
    uVar1 = FUN_088fb934((int)*(char *)(iVar2 + 6),uVar3,0);
    (&DAT_09afc7da)[iVar5 * 0x830] = uVar1;
  }
  if ((-1 < (short)(&DAT_09afc7de)[iVar5 * 0x830]) &&
     (iVar2 = FUN_088470b8((int)(short)(&DAT_09afc7de)[iVar5 * 0x830]), iVar2 != 0)) {
    if ((&DAT_09afc7de)[iVar5 * 0x830] == (&DAT_09afc7de)[param_1 * 0x830]) {
      uVar3 = FUN_088fb9bc();
      uVar1 = FUN_088fb934((int)*(char *)(iVar2 + 6),uVar3,1);
      (&DAT_09afc7de)[iVar5 * 0x830] = uVar1;
    }
    else {
      iVar4 = FUN_088fb934((int)*(char *)(iVar2 + 6),(int)*(char *)(iVar2 + 7),0);
      if (iVar4 == (short)(&DAT_09afc7da)[param_1 * 0x830]) {
        uVar3 = FUN_088fb9bc((int)*(char *)(iVar2 + 7));
        uVar1 = FUN_088fb934((int)*(char *)(iVar2 + 6),uVar3,1);
        (&DAT_09afc7de)[iVar5 * 0x830] = uVar1;
      }
    }
  }
  return;
}

