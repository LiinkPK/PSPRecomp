/* Entry 0x088BC800 | file offset 0x000B97D8 | FUN_088bc800 | bytes 504 */

undefined *
FUN_088bc800(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined1 param_5
            ,undefined1 param_6,uint param_7)

{
  short sVar1;
  short sVar2;
  short sVar3;
  undefined *puVar4;
  undefined *puVar5;
  uint local_30;
  
  puVar4 = (undefined *)
           FUN_08934944(param_2,*(int *)(param_1 + 0xc) + 8,
                        *(undefined4 *)(*(int *)(param_1 + 0xc) + 4),0xc,&LAB_088bbe38);
  if ((((*(short *)(puVar4 + 4) < 0) || (*(short *)(puVar4 + 6) < 0)) ||
      (*(short *)(puVar4 + 8) < 0)) ||
     (puVar5 = puVar4, sVar1 = DAT_09aefaf6, *(short *)(puVar4 + 10) < 0)) {
    puVar5 = &DAT_09aefaec;
    if (param_7 == 0xffffffff) {
      DAT_09af84d0 = DAT_09af84d0 * 0x343fd + 0x269ec3;
      param_7 = DAT_09af84d0 >> 0x10 & 0x7fff;
    }
    sVar1 = *(short *)(puVar4 + 4);
    local_30 = param_7;
    if (sVar1 < 0) {
      sVar1 = FUN_088bce7c((int)sVar1,param_3,param_4,0,param_5,param_6,&local_30);
    }
    sVar2 = *(short *)(puVar4 + 6);
    DAT_09aefaf0 = sVar1;
    if (sVar2 < 0) {
      sVar2 = FUN_088bce7c((int)sVar2,param_3,param_4,1,param_5,param_6,&local_30);
    }
    sVar3 = *(short *)(puVar4 + 8);
    DAT_09aefaf2 = sVar2;
    if (sVar3 < 0) {
      sVar3 = FUN_088bce7c((int)sVar3,param_3,param_4,2,param_5,param_6,&local_30);
    }
    sVar1 = *(short *)(puVar4 + 10);
    DAT_09aefaf4 = sVar3;
    if (sVar1 < 0) {
      sVar1 = FUN_088bce7c((int)sVar1,param_3,param_4,3,param_5,param_6,&local_30);
    }
  }
  DAT_09aefaf6 = sVar1;
  return puVar5;
}

