/* Entry 0x08870DBC | file offset 0x0006DD94 | FUN_08870dbc | bytes 592 */

bool FUN_08870dbc(int param_1,int param_2,undefined4 *param_3)

{
  bool bVar1;
  int iVar2;
  uint uVar3;
  uint uVar4;
  
  iVar2 = DAT_089d5ec0;
  bVar1 = DAT_089d5fd8 != 0;
  if (bVar1) {
    FUN_089a3efc(param_1,DAT_089d5ec0 + 0x720);
    FUN_089a3868(param_1 + 0x40,iVar2 + 0x760);
    FUN_089a3868(param_1 + 0x50,iVar2 + 0x770);
    FUN_089a3868(param_1 + 0x60,iVar2 + 0x780);
    FUN_089a3efc(param_1 + 0x70,iVar2 + 0x790);
    FUN_089a3868(param_1 + 0xb0,iVar2 + 2000);
    iVar2 = DAT_089d5ec0;
    *(undefined4 *)(param_1 + 0xc0) = *(undefined4 *)(DAT_089d5ec0 + 0x7e0);
    *(undefined4 *)(param_1 + 0xc4) = *(undefined4 *)(iVar2 + 0x7e4);
    *(undefined4 *)(param_1 + 200) = *(undefined4 *)(iVar2 + 0x7e8);
    *(undefined4 *)(param_1 + 0xcc) = *(undefined4 *)(iVar2 + 0x7ec);
    FUN_089a3efc(param_1 + 0xd0,iVar2 + 0x7f0);
    iVar2 = DAT_089d5ec0;
    FUN_089a3efc(DAT_089d5ec0 + 0x720,param_2);
    FUN_089a3868(iVar2 + 0x760,param_2 + 0x40);
    FUN_089a3868(iVar2 + 0x770,param_2 + 0x50);
    FUN_089a3868(iVar2 + 0x780,param_2 + 0x60);
    FUN_089a3efc(iVar2 + 0x790,param_2 + 0x70);
    FUN_089a3868(iVar2 + 2000,param_2 + 0xb0);
    iVar2 = DAT_089d5ec0;
    *(undefined4 *)(DAT_089d5ec0 + 0x7e0) = *param_3;
    *(undefined4 *)(iVar2 + 0x7e4) = param_3[1];
    *(undefined4 *)(iVar2 + 0x7e8) = param_3[2];
    *(undefined4 *)(iVar2 + 0x7ec) = param_3[3];
    FUN_089a3efc(iVar2 + 0x7f0,param_3 + 4);
    FUN_08866ba8(DAT_089d5ec0);
    uVar3 = DAT_089d5fdc + 0x1fff;
    uVar4 = DAT_089d5fe0 + 0x3fU & 0xffffffc0;
    FUN_089a02e0(1,DAT_089d5fd8 + 0x1fffU & 0xffffe000,uVar4);
    FUN_089a0330(uVar3 & 0xffffe000,uVar4);
    FUN_089a0aec(0x800,0x800,DAT_089d5fe0,DAT_089d5fe4);
    FUN_089a1200(0,0,DAT_089d5fe0,DAT_089d5fe4);
    FUN_089a0be4((-DAT_089d5fe0 - (0x1000 - DAT_089d5fe0 >> 0x1f)) + 0x1000 >> 1,
                 (-DAT_089d5fe4 - (0x1000 - DAT_089d5fe4 >> 0x1f)) + 0x1000 >> 1);
    FUN_089a0a90(0);
    FUN_089a0ab4(0);
    FUN_089a0aa4(0);
    FUN_089a0ac4(0x17);
  }
  return bVar1;
}

