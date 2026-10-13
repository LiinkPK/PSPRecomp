/* Entry 0x088E6A98 | file offset 0x000E3A70 | FUN_088e6a98 | bytes 340 */

void FUN_088e6a98(undefined4 *param_1)

{
  int iVar1;
  uint uVar2;
  undefined1 auStack_110 [128];
  undefined1 auStack_90 [128];
  
  uVar2 = param_1[5];
  if (uVar2 < 5) {
    if (uVar2 == 1) {
      if (param_1[1] != 0) {
        FUN_088e67dc(param_1);
      }
      iVar1 = FUN_0889f3e4(DAT_089d6c30,param_1[4]);
      param_1[1] = iVar1;
      *param_1 = param_1[4];
      param_1[4] = 0xffffffff;
      FUN_0893476c(auStack_110,"bgm/%s",iVar1 + 0x1c);
      iVar1 = FUN_088713e4(DAT_089d5ff0,auStack_110);
      if (iVar1 == 0) {
        FUN_08863088(auStack_90,auStack_110);
        FUN_08862b18(auStack_90,param_1[2],param_1[3],&LAB_088e6bfc,param_1);
      }
      else {
        FUN_088629dc(auStack_110,param_1[2],param_1[3],&LAB_088e6bfc,param_1,1);
      }
      param_1[5] = 2;
    }
    else if (uVar2 != 2) {
      if (uVar2 == 3) {
        FUN_0889f290(DAT_089d6c30,param_1[2],param_1[3]);
        param_1[5] = 4;
      }
      else if (uVar2 == 4) {
        param_1[5] = 0;
      }
    }
  }
  return;
}

