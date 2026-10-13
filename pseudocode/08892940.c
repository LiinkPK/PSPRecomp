/* Entry 0x08892940 | file offset 0x0008F918 | FUN_08892940 | bytes 312 */

void FUN_08892940(undefined4 *param_1,undefined4 param_2,int param_3,char param_4,undefined4 param_5
                 ,char param_6)

{
  bool bVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  
  if (param_6 == '\x01') {
    uVar2 = FUN_0885c6cc(*param_1,0x2800,0,0,1,0);
    param_1[0x1cc] = uVar2;
  }
  uVar2 = FUN_088fe7c8(param_2,0);
  bVar1 = param_3 == 0;
  if (bVar1) {
    param_3 = FUN_0885c6cc(*param_1,uVar2,0x40,0,1,1);
  }
  uVar3 = FUN_088fe708(param_2,param_3,uVar2,0);
  if (param_4 != '\0') {
    FUN_088fe944(param_2,param_3,uVar2);
  }
  FUN_08893ff4(param_1,param_3,uVar3,param_5,param_6);
  if (bVar1) {
    FUN_0885c538(*param_1,param_3,0x40);
  }
  return;
}

