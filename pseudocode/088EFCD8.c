/* Entry 0x088EFCD8 | file offset 0x000ECCB0 | FUN_088efcd8 | bytes 212 */

undefined4 FUN_088efcd8(uint *param_1,uint *param_2)

{
  undefined4 uVar1;
  uint uVar2;
  uint uVar3;
  uint uVar4;
  uint uVar5;
  undefined8 uVar6;
  
  uVar5 = param_1[1];
  uVar4 = *param_1;
  uVar3 = param_2[1];
  uVar2 = *param_2;
  if (uVar5 == uVar3 && uVar4 < uVar2 || uVar5 < uVar3) {
    uVar1 = 0;
  }
  else {
    uVar1 = sceRtcGetTickResolution();
    uVar6 = FUN_0899924c(uVar4 - uVar2,(uVar5 - uVar3) - (uint)(uVar4 < uVar2),uVar1,0);
    uVar6 = FUN_0899924c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x3c,0);
    uVar6 = FUN_0899924c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x3c,0);
    uVar1 = FUN_0899924c((int)uVar6,(int)((ulonglong)uVar6 >> 0x20),0x18,0);
  }
  return uVar1;
}

