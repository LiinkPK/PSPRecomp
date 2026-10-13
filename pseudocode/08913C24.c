/* Entry 0x08913C24 | file offset 0x00110BFC | FUN_08913c24 | bytes 360 */

void FUN_08913c24(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  int iVar3;
  undefined4 uVar4;
  undefined4 local_20;
  undefined4 local_1c;
  undefined4 local_18;
  undefined4 local_14;
  
  FUN_08883f78();
  FUN_08883f64();
  FUN_08918e90(param_1);
  FUN_08919500(param_1);
  iVar1 = FUN_08873eb4();
  if (iVar1 != 0) {
    FUN_08873d34(0x41a00000,4,0,0,0,2);
    local_20 = 0;
    local_1c = 0;
    local_18 = 0;
    local_14 = 0;
    FUN_08873db0(&local_20,2);
  }
  if ((*(char *)(*(int *)(param_1 + 0x54) + 7) < '\0') || (*(char *)(param_1 + 0x7e6) == '\0')) {
    iVar1 = FUN_08910644(*(undefined4 *)(param_1 + 0x7b0));
    iVar3 = -1;
    if (iVar1 != 0) {
      iVar3 = (int)*(short *)(iVar1 + 6);
    }
    func_0x08b438b0(*(undefined4 *)(param_1 + 0x88),iVar3);
    iVar1 = *(int *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
  }
  else {
    func_0x08b438b0(*(undefined4 *)(param_1 + 0x88));
    iVar1 = *(int *)(param_1 + 0x54);
    uVar2 = *(undefined4 *)(param_1 + 0x8c);
  }
  uVar4 = 0;
  if (((*(byte *)(iVar1 + 1) & 1) != 0) && (*(char *)(param_1 + 0x7df) != '\0')) {
    uVar4 = 1;
  }
  func_0x08b44fdc(uVar2,uVar4);
  func_0x08b4511c(*(undefined4 *)(param_1 + 0x8c));
  FUN_0891515c(param_1);
  uVar2 = FUN_0891705c(0xffffffff);
  FUN_089127c4(uVar2);
  if ((-1 < *(char *)(*(int *)(param_1 + 0x54) + 7)) && (*(char *)(param_1 + 0x7e6) != '\0')) {
    func_0x08b43ae8(*(undefined4 *)(param_1 + 0x88));
  }
  func_0x08b49b5c(*(undefined4 *)(param_1 + 0x570));
  FUN_08914b64(param_1,1);
  return;
}

