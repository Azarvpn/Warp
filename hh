{
  "outbounds": 
  [
    {
      "type": "wireguard",
      "tag": "🟣 Azarvpn_v2ray | Warp 🟣",
      "server": "jhn.dornabo.top",
      "server_port": 908,

      "local_address": [
        "172.16.0.2/32",
        "2606:4700:110:8246:291:b4ed:ac41:9727/128"
      ],
      "private_key": "iA4quiaQni0pC2y39bmTTtgJnPHC71onjK9ZZbd6JlI=",
      "peer_public_key": "bmXOC+F1FxEMF9dyiK2H5/1SUtzH0JuVo51h2wPfgyo=",
      "reserved": [219,211,61],

      "mtu": 1280,
      "fake_packets": "5-10"
    },
    {
      "type": "wireguard",
      "tag": "🟣 Azarvpn_v2ray | Warp+ 🟣",
      "detour": "🟣 Azarvpn_v2ray | Warp 🟣",
      "server": "jhn.dornabo.top",
      "server_port": 854,
      
      "local_address": [
          "172.16.0.2/32",
          "2606:4700:110:844d:d55f:420f:1061:ed8/128"
      ],
      "private_key": "IBX9NBER3xsd+TgypS34RPd+dFveTyJJtl+gghOpXnY=",
      "peer_public_key": "bmXOC+F1FxEMF9dyiK2H5/1SUtzH0JuVo51h2wPfgyo=",
      "reserved": [19,198,165],  

      "mtu": 1120,
      "fake_packets": "5-10"
    },
    {
      "type": "wireguard",
      "tag": "🟣 Azarvpn_v2ray | Warp+2 🟣",
      "detour": "🟣 Azarvpn_v2ray | Warp 🟣",
      "server": "jhn.dornabo.top",
      "server_port": 908,
      
      "local_address": [
          "172.16.0.2/32",
          "2606:4700:110:8a9f:775b:42bb:9ad8:bc0a/128"
      ],
      "private_key": "sGm/jt3/y4wencEsVfdPBaGO3uiEWG6ehAouKvPsaHU=",
      "peer_public_key": "bmXOC+F1FxEMF9dyiK2H5/1SUtzH0JuVo51h2wPfgyo=",
      "reserved": [95,216,79],  

      "mtu": 1120,
      "fake_packets": "5-10"
    },
	,
    {
      "type": "wireguard",
      "tag": "🟣 Azarvpn_v2ray | Warp+3 🟣",
      "detour": "🟣 Azarvpn_v2ray | Warp 🟣",
      "server": "jhn.dornabo.top",
      "server_port": 854,
      
      "local_address": [
          "172.16.0.2/32",
          "2606:4700:110:8d6b:364c:371f:2d68:d051/128"
      ],
      "private_key": "SGzKYzrV66R+RJhMu7DEFBdPWk88V6EU2bGVTpmiflo=",
      "peer_public_key": "bmXOC+F1FxEMF9dyiK2H5/1SUtzH0JuVo51h2wPfgyo=",
      "reserved": [169,96,212],  

      "mtu": 1120,
      "fake_packets": "5-10"
    },
	,
    {
      "type": "wireguard",
      "tag": "🟣 Azarvpn_v2ray | Warp+3 🟣",
      "detour": "🟣 Azarvpn_v2ray | Warp 🟣",
      "server": "jhn.dornabo.top",
      "server_port": 854,
      
      "local_address": [
          "172.16.0.2/32",
          "2606:4700:110:8071:819:8561:a17b:320/128"
      ],
      "private_key": "QKtRUsWpAgldIFS7QJKvE3BIIuVjgI/Hx3FdVc8Yn2U=",
      "peer_public_key": "bmXOC+F1FxEMF9dyiK2H5/1SUtzH0JuVo51h2wPfgyo=",
      "reserved": [185,39,130],  

      "mtu": 1120,
      "fake_packets": "5-10"
    }
  ]
}
