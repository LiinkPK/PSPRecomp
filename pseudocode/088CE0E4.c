/* Entry 0x088CE0E4 | file offset 0x000CB0BC | FUN_088ce0e4 | bytes 444 */

undefined4 FUN_088ce0e4(int param_1)

{
  int iVar1;
  float *pfVar2;
  undefined4 uVar3;
  float *pfVar4;
  float fVar5;
  
  iVar1 = FUN_088ce2a0();
  if (iVar1 == 0) {
    uVar3 = 0xffffffff;
  }
  else if (*(char *)(param_1 + 8) == '\0') {
    uVar3 = 0;
  }
  else {
    pfVar2 = (float *)FUN_089a00f4(0x28);
    if (pfVar2 == (float *)0x0) {
      uVar3 = 0xfffffffe;
    }
    else {
      iVar1 = 0;
      pfVar4 = pfVar2;
      do {
        fVar5 = (float)iVar1;
        *pfVar4 = fVar5 * 128.0;
        iVar1 = iVar1 + 1;
        pfVar4[1] = fVar5 * 16.0;
        pfVar4[2] = DAT_089d7818 + fVar5 * 128.0;
        pfVar4[3] = DAT_089d781c + fVar5 * 16.0;
        pfVar4[4] = 0.0;
        pfVar4 = pfVar4 + 5;
      } while (iVar1 < 2);
      uVar3 = FUN_089a04e8();
      FUN_089a12a4(0,2,3,0,0);
      FUN_089a0384(4);
      FUN_0899d2f8(*(undefined4 *)(param_1 + 4));
      FUN_089a0384(9);
      FUN_089a03dc(0x15);
      FUN_089a03dc(1);
      FUN_089a03dc(5);
      FUN_089a03dc(10);
      FUN_089a03dc(0);
      FUN_089a03dc(0x11);
      FUN_089a03dc(3);
      FUN_089a03dc(7);
      FUN_089a03dc(6);
      FUN_089a0c8c(0xffffffff);
      FUN_089a119c(1);
      FUN_089a0520(6,0x800183,2,0,pfVar2);
      FUN_089a119c(0);
      FUN_0899fdc4(uVar3);
      *(undefined1 *)(param_1 + 8) = 0;
      uVar3 = 0;
    }
  }
  return uVar3;
}

