/* Entry 0x088C2560 | file offset 0x000BF538 | FUN_088c2560 | bytes 164 */

undefined4
FUN_088c2560(undefined4 param_1,int param_2,undefined4 param_3,undefined4 param_4,int param_5)

{
  int iVar1;
  int iVar2;
  undefined4 uVar3;
  undefined1 auStack_10c0 [4264];
  
  iVar1 = DAT_089d712c;
  uVar3 = *(undefined4 *)(param_5 + 4);
  iVar2 = FUN_088bd278(uVar3);
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    FUN_088f6208(auStack_10c0,iVar2);
    FUN_088f526c(iVar1 + 0x1fecc,auStack_10c0);
    if ((*(byte *)(iVar2 + 8) & 1) != 0) {
      FUN_088cc440((int)*(short *)(iVar2 + 2));
    }
    *(undefined4 *)(param_2 + 4) = uVar3;
    uVar3 = 1;
  }
  return uVar3;
}

