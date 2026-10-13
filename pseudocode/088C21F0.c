/* Entry 0x088C21F0 | file offset 0x000BF1C8 | FUN_088c21f0 | bytes 252 */

undefined4
FUN_088c21f0(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  undefined2 uVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  
  iVar2 = FUN_088cb164(DAT_089d712c + 0xf58,param_4);
  iVar2 = iVar2 + 0x10;
  *(undefined4 *)(param_2 + 4) = *(undefined4 *)(param_5 + 4);
  uVar1 = FUN_088b8038(iVar2,param_2 + 0xe,0x96);
  *(undefined2 *)(param_2 + 0xc) = uVar1;
  uVar1 = FUN_088b9ba0(param_2 + 0x13c,0x20,iVar2,param_4,0,0);
  *(undefined2 *)(param_2 + 0x13a) = uVar1;
  iVar3 = (int)*(short *)(param_2 + 0x13a);
  iVar4 = 0;
  iVar5 = param_2;
  if (0 < iVar3) {
    do {
      FUN_088b7ed4(iVar2,(int)*(short *)(iVar5 + 0x13c));
      iVar3 = (int)*(short *)(param_2 + 0x13a);
      iVar4 = iVar4 + 1;
      iVar5 = iVar5 + 2;
    } while (iVar4 < iVar3);
  }
  if (0 < iVar3) {
    *(uint *)(DAT_089d726c + 4) = *(uint *)(DAT_089d726c + 4) | 0x80000000;
  }
  return 1;
}

