/* Entry 0x08861D7C | file offset 0x0005ED54 | FUN_08861d7c | bytes 176 */

void FUN_08861d7c(undefined4 *param_1,int param_2)

{
  bool bVar1;
  int iVar2;
  
  bVar1 = true;
  if (((-1 < param_2) && (iVar2 = sceNpDrmEdataSetupKey(param_1[1]), -1 < iVar2)) &&
     (iVar2 = FUN_08862f2c(param_1[1],param_1[3],param_1[4],FUN_08861ec4,param_1,1), iVar2 == 1)) {
    *param_1 = 2;
    bVar1 = false;
  }
  if (bVar1) {
    FUN_0885c538(param_1[5],param_1[3],0);
    param_1[3] = 0;
    param_1[4] = 0;
    param_1[1] = 0xffffffff;
    *param_1 = 3;
  }
  return;
}

